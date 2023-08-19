#include "AActor.hpp"
#include "ABoilerPipe.hpp"
ABoilerPipe* ABoilerPipe::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BoilerPipe");
    return (ABoilerPipe*)res;
}
