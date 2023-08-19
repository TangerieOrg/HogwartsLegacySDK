#include "AActor.hpp"
#include "ATombProtectorStatue.hpp"
ATombProtectorStatue* ATombProtectorStatue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TombProtectorStatue");
    return (ATombProtectorStatue*)res;
}
