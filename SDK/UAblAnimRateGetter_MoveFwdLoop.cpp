#include "UAblAnimRateGetter.hpp"
#include "UAblAnimRateGetter_MoveFwdLoop.hpp"
UAblAnimRateGetter_MoveFwdLoop* UAblAnimRateGetter_MoveFwdLoop::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimRateGetter_MoveFwdLoop");
    return (UAblAnimRateGetter_MoveFwdLoop*)res;
}
