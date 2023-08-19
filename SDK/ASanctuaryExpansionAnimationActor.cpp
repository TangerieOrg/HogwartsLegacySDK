#include "AActor.hpp"
#include "ASanctuaryExpansionAnimationActor.hpp"
#include "FDbSingleColumnInfo.hpp"
ASanctuaryExpansionAnimationActor* ASanctuaryExpansionAnimationActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryExpansionAnimationActor");
    return (ASanctuaryExpansionAnimationActor*)res;
}
