#include "AActor.hpp"
#include "FGameplayTag.hpp"
#include "TagsChangedEvent.hpp"
#include "UAblAbilityChannelingScratchPad.hpp"
#include "UAblChannelingObjectArchitectScratchPad.hpp"
#include "UFunction.hpp"
UAblChannelingObjectArchitectScratchPad* UAblChannelingObjectArchitectScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblChannelingObjectArchitectScratchPad");
    return (UAblChannelingObjectArchitectScratchPad*)res;
}
void UAblChannelingObjectArchitectScratchPad::TagsChanged(AActor* Actor, FGameplayTag GameplayTag, TagsChangedEvent TagsChanged) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblChannelingObjectArchitectScratchPad.TagsChanged"));
    struct Params_TagsChanged {
        AActor* Actor; // 0x0
        FGameplayTag GameplayTag; // 0x8
        TagsChangedEvent TagsChanged; // 0x10
    }; // Size: 0x11
    Params_TagsChanged params{};
    params.Actor = (AActor*)Actor;
    params.GameplayTag = (FGameplayTag)GameplayTag;
    params.TagsChanged = (TagsChangedEvent)TagsChanged;
    ProcessEvent(func, &params);
}
