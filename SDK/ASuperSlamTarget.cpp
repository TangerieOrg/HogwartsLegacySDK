#include "AActor.hpp"
#include "ASuperSlamTarget.hpp"
#include "UBoxComponent.hpp"
ASuperSlamTarget* ASuperSlamTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SuperSlamTarget");
    return (ASuperSlamTarget*)res;
}
