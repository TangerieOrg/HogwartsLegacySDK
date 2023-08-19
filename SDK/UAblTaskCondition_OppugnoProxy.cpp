#include "FGameplayTag.hpp"
#include "UAblTaskCondition.hpp"
#include "UAblTaskCondition_OppugnoProxy.hpp"
#include "UClass.hpp"
UAblTaskCondition_OppugnoProxy* UAblTaskCondition_OppugnoProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTaskCondition_OppugnoProxy");
    return (UAblTaskCondition_OppugnoProxy*)res;
}
