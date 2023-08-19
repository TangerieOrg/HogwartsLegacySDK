#include "UBP_SpiderBase_Interface_C.hpp"
#include "UInterface.hpp"
UBP_SpiderBase_Interface_C* UBP_SpiderBase_Interface_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase_Interface.BP_SpiderBase_Interface_C");
    return (UBP_SpiderBase_Interface_C*)res;
}
