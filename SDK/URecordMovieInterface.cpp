#include "UInterface.hpp"
#include "URecordMovieInterface.hpp"
URecordMovieInterface* URecordMovieInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/RecordMovieInterface.RecordMovieInterface");
    return (URecordMovieInterface*)res;
}
