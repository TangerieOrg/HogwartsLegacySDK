#include "FDialogueConversationReference.hpp"
#include "UBroomRiderAction_PlayDialogue.hpp"
#include "UBroomRiderSubActionBase.hpp"
#include "UFunction.hpp"
UBroomRiderAction_PlayDialogue* UBroomRiderAction_PlayDialogue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomRiderAction_PlayDialogue");
    return (UBroomRiderAction_PlayDialogue*)res;
}
void UBroomRiderAction_PlayDialogue::OnDialogueComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomRiderAction_PlayDialogue.OnDialogueComplete"));
    struct Params_OnDialogueComplete {
    }; // Size: 0x0
    Params_OnDialogueComplete params{};
    ProcessEvent(func, &params);
}
