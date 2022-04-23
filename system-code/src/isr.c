#include "isr.h"
#include "stdint.h"

ISR(__defaultISR) {}

ISR(__ISRExceptionCrash) {
  while (1) {}
}

VECTOR_TABLE(vectorTable) {
  &__defaultISR, /* UserSoftwareInterrupt */
  &__defaultISR, /* SupervisorSoftwareInterrupt */
  &__defaultISR, /* Reserved0 */
  &__defaultISR, /* MachineSoftwareInterrupt */
  &__defaultISR, /* UserTimerInterrupt */
  &__defaultISR, /* SupervisorTimerInterrupt */
  &__defaultISR, /* Reserved1 */
  &__defaultISR, /* MachineTimerInterrupt */
  &__defaultISR, /* UserExternalInterrupt */
  &__defaultISR, /* SupervisorExternalInterrupt */
  &__defaultISR, /* Reserved2 */
  &__defaultISR, /* MachineExternalInterrupt */
  &__ISRExceptionCrash, /* InstructionAddressMisaligned */
  &__ISRExceptionCrash, /* InstructionAccessFault */
  &__ISRExceptionCrash, /* IllegalInstruction */
  &__defaultISR, /* Breakpoint */
  &__ISRExceptionCrash, /* LoadAddressMisaligned */
  &__ISRExceptionCrash, /* LoadAccessFault */
  &__ISRExceptionCrash, /* StoreAMOAddressMisaligned */
  &__ISRExceptionCrash, /* StoreAMOAccessFault */
  &__defaultISR, /* EnvironmentCallFromUMode */
  &__defaultISR, /* EnvironmentCallFromSMode */
  &__defaultISR, /* Reserved3 */
  &__defaultISR, /* EnvironmentCallFromMMode */
  &__defaultISR, /* InstructionPageFault */
  &__ISRExceptionCrash, /* LoadPageFault */
  &__defaultISR, /* Reserved4 */
  &__ISRExceptionCrash, /* StoreAMOPageFault */
};