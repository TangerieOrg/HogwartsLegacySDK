#include "UGameLogicBase.hpp"
#include "UObject.hpp"
UGameLogicBase* UGameLogicBase::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicBase");
    return (UGameLogicBase*)res;
}
