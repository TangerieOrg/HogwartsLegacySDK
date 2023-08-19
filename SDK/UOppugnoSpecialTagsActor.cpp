#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UOppugnoSpecialTagsActor.hpp"
UOppugnoSpecialTagsActor* UOppugnoSpecialTagsActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OppugnoSpecialTagsActor");
    return (UOppugnoSpecialTagsActor*)res;
}
FGameplayTagContainer UOppugnoSpecialTagsActor::GetSpecialTags() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OppugnoSpecialTagsActor.GetSpecialTags"));
    struct Params_GetSpecialTags {
        FGameplayTagContainer ReturnValue; // 0x0
    }; // Size: 0x20
    Params_GetSpecialTags params{};
    ProcessEvent(func, &params);
    return (FGameplayTagContainer)params.ReturnValue;
}
void UOppugnoSpecialTagsActor::AddSpecialTag(FGameplayTag GameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OppugnoSpecialTagsActor.AddSpecialTag"));
    struct Params_AddSpecialTag {
        FGameplayTag GameplayTag; // 0x0
    }; // Size: 0x8
    Params_AddSpecialTag params{};
    params.GameplayTag = (FGameplayTag)GameplayTag;
    ProcessEvent(func, &params);
}
