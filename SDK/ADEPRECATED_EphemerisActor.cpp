#include "AActor.hpp"
#include "ADEPRECATED_EphemerisActor.hpp"
ADEPRECATED_EphemerisActor* ADEPRECATED_EphemerisActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EphemerisActor");
    return (ADEPRECATED_EphemerisActor*)res;
}
