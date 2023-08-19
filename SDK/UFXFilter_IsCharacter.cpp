#include "UFXFilter.hpp"
#include "UFXFilter_IsCharacter.hpp"
UFXFilter_IsCharacter* UFXFilter_IsCharacter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsCharacter");
    return (UFXFilter_IsCharacter*)res;
}
