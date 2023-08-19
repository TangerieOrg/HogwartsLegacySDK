#include "UAblAnimRateGetter.hpp"
#include "UAblAnimRateGetter_StealthMoveFwdLoop.hpp"
UAblAnimRateGetter_StealthMoveFwdLoop* UAblAnimRateGetter_StealthMoveFwdLoop::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimRateGetter_StealthMoveFwdLoop");
    return (UAblAnimRateGetter_StealthMoveFwdLoop*)res;
}
