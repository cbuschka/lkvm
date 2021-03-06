#include "kvm/irq.h"
#include "kvm/kvm-arch.h"

static u8 next_line = KVM_IRQ_OFFSET;

int irq__alloc_line(void)
{
	return next_line++;
}

int irq__get_nr_allocated_lines(void)
{
	return next_line - KVM_IRQ_OFFSET;
}
