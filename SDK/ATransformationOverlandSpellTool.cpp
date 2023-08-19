#include "AFireOnceSpellTool.hpp"
#include "ATransformationOverlandSpellTool.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMultiFX2_Base.hpp"
ATransformationOverlandSpellTool* ATransformationOverlandSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransformationOverlandSpellTool");
    return (ATransformationOverlandSpellTool*)res;
}
