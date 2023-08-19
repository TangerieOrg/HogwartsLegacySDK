#include "FGameplayTagContainer.hpp"
#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_RemoveIAGameplayTags.hpp"
UMultiFX2_RemoveIAGameplayTags* UMultiFX2_RemoveIAGameplayTags::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_RemoveIAGameplayTags");
    return (UMultiFX2_RemoveIAGameplayTags*)res;
}
