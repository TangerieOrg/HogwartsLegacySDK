#include "UFXFilter.hpp"
#include "UFXFilter_InstigatorIsPlayer.hpp"
UFXFilter_InstigatorIsPlayer* UFXFilter_InstigatorIsPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_InstigatorIsPlayer");
    return (UFXFilter_InstigatorIsPlayer*)res;
}
