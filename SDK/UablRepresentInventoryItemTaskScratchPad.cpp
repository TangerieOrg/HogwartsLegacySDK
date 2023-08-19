#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "FInventoryResult.hpp"
#include "FItemProperties.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UablRepresentInventoryItemTaskScratchPad.hpp"
UablRepresentInventoryItemTaskScratchPad* UablRepresentInventoryItemTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablRepresentInventoryItemTaskScratchPad");
    return (UablRepresentInventoryItemTaskScratchPad*)res;
}
