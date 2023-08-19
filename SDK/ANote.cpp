#include "AActor.hpp"
#include "ANote.hpp"
ANote* ANote::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Note");
    return (ANote*)res;
}
