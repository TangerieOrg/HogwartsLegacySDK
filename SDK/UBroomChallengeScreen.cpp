#include "UBroomChallengeScreen.hpp"
#include "UScreen.hpp"
UBroomChallengeScreen* UBroomChallengeScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomChallengeScreen");
    return (UBroomChallengeScreen*)res;
}
