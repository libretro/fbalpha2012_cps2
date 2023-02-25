#ifdef __cplusplus
extern "C" {
#endif

// FM timers

#define TIMER_TICKS_PER_SECOND (2048000000)
#define MAKE_TIMER_TICKS(n, m) ((INT64)(n) * TIMER_TICKS_PER_SECOND / (m))
#define MAKE_CPU_CYCLES(n, m) ((INT64)(n) * (m) / TIMER_TICKS_PER_SECOND)

// Start / stop a timer
void BurnTimerSetRetrig(INT32 c, double period);						// period in  s

void BurnTimerExit();
void BurnTimerReset();
INT32 BurnTimerInit(INT32 (*pOverCallback)(INT32, INT32), double (*pTimeCallback)());
INT32 BurnTimerAttachZet(INT32 nClockspeed);
INT32 BurnTimerUpdate(INT32 nCycles);
void BurnTimerEndFrame(INT32 nCycles);

#ifdef __cplusplus
}
#endif
