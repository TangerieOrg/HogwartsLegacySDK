#include "FAkWwiseObjectDetails.hpp"
#include "UAkWwiseTree.hpp"
#include "UFunction.hpp"
#include "UWidget.hpp"
UAkWwiseTree* UAkWwiseTree::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkWwiseTree");
    return (UAkWwiseTree*)res;
}
void UAkWwiseTree::SetSearchText(FString newText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWwiseTree.SetSearchText"));
    struct Params_SetSearchText {
        FString newText; // 0x0
    }; // Size: 0x10
    Params_SetSearchText params{};
    params.newText = (FString)newText;
    ProcessEvent(func, &params);
}
FString UAkWwiseTree::GetSearchText() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWwiseTree.GetSearchText"));
    struct Params_GetSearchText {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSearchText params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FAkWwiseObjectDetails UAkWwiseTree::GetSelectedItem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWwiseTree.GetSelectedItem"));
    struct Params_GetSelectedItem {
        FAkWwiseObjectDetails ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetSelectedItem params{};
    ProcessEvent(func, &params);
    return (FAkWwiseObjectDetails)params.ReturnValue;
}
