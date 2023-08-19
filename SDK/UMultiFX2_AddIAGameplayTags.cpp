#include "FGameplayTagContainer.hpp"
#include "UMultiFX2_AddIAGameplayTags.hpp"
#include "UMultiFX2_Filtered.hpp"
UMultiFX2_AddIAGameplayTags* UMultiFX2_AddIAGameplayTags::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_AddIAGameplayTags");
    return (UMultiFX2_AddIAGameplayTags*)res;
}
