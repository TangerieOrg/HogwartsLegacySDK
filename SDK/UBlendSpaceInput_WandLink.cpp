#include "UActorProvider.hpp"
#include "UBlendSpaceInputProvider.hpp"
#include "UBlendSpaceInput_WandLink.hpp"
UBlendSpaceInput_WandLink* UBlendSpaceInput_WandLink::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BlendSpaceInput_WandLink");
    return (UBlendSpaceInput_WandLink*)res;
}
