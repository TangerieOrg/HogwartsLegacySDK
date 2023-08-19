#include "AActor.hpp"
#include "AObjectGrouper.hpp"
AObjectGrouper* AObjectGrouper::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ObjectGrouper");
    return (AObjectGrouper*)res;
}
