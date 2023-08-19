#include "UFXFilter.hpp"
#include "UFXFilter_IsPlayer.hpp"
UFXFilter_IsPlayer* UFXFilter_IsPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsPlayer");
    return (UFXFilter_IsPlayer*)res;
}
