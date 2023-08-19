#include "AActor.hpp"
#include "ANamedActor.hpp"
ANamedActor* ANamedActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NamedActor");
    return (ANamedActor*)res;
}
