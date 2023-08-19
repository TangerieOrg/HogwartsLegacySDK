#include "FGameplayTag.hpp"
#include "UAblAnimNotify.hpp"
#include "UAblSetTagNotify.hpp"
UAblSetTagNotify* UAblSetTagNotify::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetTagNotify");
    return (UAblSetTagNotify*)res;
}
