#include "FCharacterStateHUDStyle.hpp"
#include "UCharacterStateHUDWidgetStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
UCharacterStateHUDWidgetStyle* UCharacterStateHUDWidgetStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CharacterStateHUDWidgetStyle");
    return (UCharacterStateHUDWidgetStyle*)res;
}
