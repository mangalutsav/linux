#ifdef CONFIG_SCHED_LOT

/*
 * Starting with a simple, 1 runq per cpu scheduler.  Don't care
 * about fairness for right now.  Just get it up and running to 
 * verify that we have the interface correct
 */

static void
enqueue_task_new(struct rq *rq, struct task_struct *p, int wakeup, bool head)
{
}

static void dequeue_task_new(struct rq *rq, struct task_struct *p, int sleep)
{
}

static void yield_task_new(struct rq *rq)
{
}

static void check_preempt_curr_new(struct rq *rq, struct task_struct *p, int flags)
{
}

static struct task_struct *pick_next_task_new(struct rq *rq)
{
}

static void put_prev_task_new(struct rq *rq, struct task_struct *p)
{
}

#ifdef CONFIG_SMP
static int select_task_rq_new(struct task_struct *p, int sd_flag, int flags)
{
}
static void pre_schedule_new(struct rq *rq, struct task_struct *prev)
{
}

static void post_schedule_new(struct rq *rq)
{
}

static void task_woken_new(struct rq *rq, struct task_struct *p)
{
}

static void task_waking_new(struct rq *this_rq, struct task_struct *task)
{
}
static void set_cpus_allowed_new(struct task_struct *p,
               const struct cpumask *new_mask)
{
}
/* Assumes rq->lock is held */
static void rq_online_new(struct rq *rq)
{
}

/* Assumes rq->lock is held */
static void rq_offline_new(struct rq *rq)
{
}
#endif /* COMFIG_SMP */

static void set_curr_task_new(struct rq *rq)
{
}


static void task_tick_new(struct rq *rq, struct task_struct *p, int queued)
{
} 

static void task_fork_new(struct task_struct *p)
{
}
static void switched_from_new(struct rq *rq, struct task_struct *p,
              int running)
{
}
static void switched_to_new(struct rq *this_rq, struct task_struct *task,
               int running)
{
}
static void prio_changed_new(struct rq *rq, struct task_struct *p,
               int oldprio, int running)
{
}
static unsigned int get_rr_interval_new(struct rq *rq, struct task_struct *task)
{
}



static const struct sched_class new_sched_class = {
   .next           = &fair_sched_class,
   .enqueue_task       = enqueue_task_new,
   .dequeue_task       = dequeue_task_new,
   .yield_task     = yield_task_new,

   .check_preempt_curr = check_preempt_curr_new,

   .pick_next_task     = pick_next_task_new,
   .put_prev_task      = put_prev_task_new,

#ifdef CONFIG_SMP
   .select_task_rq     = select_task_rq_new,

   .pre_schedule       = pre_schedule_new,
   .post_schedule      = post_schedule_new,

   .task_waking            = task_waking_new,
   .task_woken     = task_woken_new,

   .set_cpus_allowed       = set_cpus_allowed_new,

   .rq_online              = rq_online_new,
   .rq_offline             = rq_offline_new,
#endif

   .set_curr_task          = set_curr_task_new,
   .task_tick      = task_tick_new,
   .task_fork              = task_fork_new,

   .switched_from          = switched_from_new,
   .switched_to        = switched_to_new,

   .prio_changed       = prio_changed_new,

   .get_rr_interval    = get_rr_interval_new,
#ifdef CONFIG_FAIR_GROUP_SCHED
   .moved_group            = NULL
#endif
};

#endif /* CONFIG_SCHED_NEW */
