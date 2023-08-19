#include "UBroomRiderActionBase.hpp"
#include "UBroomRiderAction_WaitForPlayer.hpp"
UBroomRiderAction_WaitForPlayer* UBroomRiderAction_WaitForPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomRiderAction_WaitForPlayer");
    return (UBroomRiderAction_WaitForPlayer*)res;
}
