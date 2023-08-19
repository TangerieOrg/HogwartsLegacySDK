#include "FCPXMLExportDataSource.hpp"
#include "UMoviePipelineFCPXMLExporter.hpp"
#include "UMoviePipelineOutputBase.hpp"
UMoviePipelineFCPXMLExporter* UMoviePipelineFCPXMLExporter::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineFCPXMLExporter");
    return (UMoviePipelineFCPXMLExporter*)res;
}
