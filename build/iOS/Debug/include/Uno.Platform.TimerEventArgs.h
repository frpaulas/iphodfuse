// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Uno{namespace Platform{struct TimerEventArgs;}}}

namespace g{
namespace Uno{
namespace Platform{

// public sealed class TimerEventArgs :757
// {
uType* TimerEventArgs_typeof();
void TimerEventArgs__ctor_1_fn(TimerEventArgs* __this, double* lastTickTimestamp, double* tickDuration, double* currentTime);
void TimerEventArgs__get_CurrentTime_fn(TimerEventArgs* __this, double* __retval);
void TimerEventArgs__set_CurrentTime_fn(TimerEventArgs* __this, double* value);
void TimerEventArgs__get_LastTickTimestamp_fn(TimerEventArgs* __this, double* __retval);
void TimerEventArgs__set_LastTickTimestamp_fn(TimerEventArgs* __this, double* value);
void TimerEventArgs__New2_fn(double* lastTickTimestamp, double* tickDuration, double* currentTime, TimerEventArgs** __retval);
void TimerEventArgs__get_TickDuration_fn(TimerEventArgs* __this, double* __retval);
void TimerEventArgs__set_TickDuration_fn(TimerEventArgs* __this, double* value);

struct TimerEventArgs : ::g::Uno::EventArgs
{
    double _CurrentTime;
    double _LastTickTimestamp;
    double _TickDuration;

    void ctor_1(double lastTickTimestamp, double tickDuration, double currentTime);
    double CurrentTime();
    void CurrentTime(double value);
    double LastTickTimestamp();
    void LastTickTimestamp(double value);
    double TickDuration();
    void TickDuration(double value);
    static TimerEventArgs* New2(double lastTickTimestamp, double tickDuration, double currentTime);
};
// }

}}} // ::g::Uno::Platform
