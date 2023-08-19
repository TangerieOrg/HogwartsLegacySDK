#include "UAblAnimNotify.hpp"
#include "UAnimNotify.hpp"
UAblAnimNotify* UAblAnimNotify::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAnimNotify");
    return (UAblAnimNotify*)res;
}
