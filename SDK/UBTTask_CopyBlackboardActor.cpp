#include "UBTTask_CopyBlackboardActor.hpp"
#include "UBTTask_CopyBlackboardValue.hpp"
UBTTask_CopyBlackboardActor* UBTTask_CopyBlackboardActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_CopyBlackboardActor");
    return (UBTTask_CopyBlackboardActor*)res;
}
