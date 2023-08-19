#include "EFXPostProcessingDuplicateAction.hpp"
#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_PostProcessing.hpp"
#include "UMultiFX2_PostProcessingDefinition.hpp"
UMultiFX2_PostProcessing* UMultiFX2_PostProcessing::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_PostProcessing");
    return (UMultiFX2_PostProcessing*)res;
}
