#include "UFunction.hpp"
#include "ULockPlayerSession.hpp"
#include "USessionTracker.hpp"
ULockPlayerSession* ULockPlayerSession::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LockPlayerSession");
    return (ULockPlayerSession*)res;
}
void ULockPlayerSession::Tick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockPlayerSession.Tick"));
    struct Params_Tick {
    }; // Size: 0x0
    Params_Tick params{};
    ProcessEvent(func, &params);
}
