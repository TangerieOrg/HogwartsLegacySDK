#include "AActor.hpp"
#include "ASpellTool.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UObject.hpp"
#include "UObjectStateInfo.hpp"
#include "UPrimitiveComponent.hpp"
#include "UThrowData.hpp"
#include "UWorld.hpp"
UThrowData* UThrowData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ThrowData");
    return (UThrowData*)res;
}
