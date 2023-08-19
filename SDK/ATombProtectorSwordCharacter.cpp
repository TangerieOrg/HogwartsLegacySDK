#include "AActor.hpp"
#include "AAmbulatory_Character.hpp"
#include "ATombProtectorSwordCharacter.hpp"
ATombProtectorSwordCharacter* ATombProtectorSwordCharacter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TombProtectorSwordCharacter");
    return (ATombProtectorSwordCharacter*)res;
}
