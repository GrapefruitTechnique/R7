/*
* Copyright (C) 2017 by Godlike
* This code is licensed under the MIT license (MIT)
* (http://opensource.org/licenses/MIT)
*/

#ifndef UNICORN_VIDEO_GEOMETRY_MESH_HPP
#define UNICORN_VIDEO_GEOMETRY_MESH_HPP

#include <unicorn/utility/SharedMacros.hpp>
#include <wink/signal.hpp>
#include <glm/glm.hpp>
#include <vector>

namespace unicorn
{
namespace video
{
namespace geometry
{
/**
 * @brief Each vertex information
 */
struct Vertex
{
    /**
     * @brief Position of vertex
     */
    glm::vec3 pos;
    /**
     * @brief Color of vertex   
     */
    glm::vec3 color;
};

/**
* @brief Class for geometry holding.
*/
class Mesh
{
public:
    UNICORN_EXPORT Mesh();
    UNICORN_EXPORT ~Mesh();

    /**
     * @brief Updating vertices geometry
     * @param vertices vertexes data
     */
    UNICORN_EXPORT void SetVertices(const std::vector<Vertex>& vertices);
    /**
     * @brief Updating indices geometry
     * @param indices indices data
     */
    UNICORN_EXPORT void SetIndices(const std::vector<uint16_t>& indices);
    /**
    * @brief Updating vertices and indices geometry, preferable when filling mesh first time, because indices and vertexes MUST not be null.
    * @param vertices vertexes data 
    * @param indices indices data
    */
    UNICORN_EXPORT void SetMeshData(const std::vector<Vertex>& vertices, const std::vector<uint16_t>& indices);
    /**
     * @brief Returns mesh vertices
     * @return Mesh vertices
     */
    UNICORN_EXPORT std::vector<Vertex> GetVertices() const;
    /**
    * @brief Returns mesh indices
    * @return Mesh indices
    */
    UNICORN_EXPORT std::vector<uint16_t> GetIndices() const;

    wink::signal<wink::slot<void()>> DataUpdated;

    /**
     * @brief Model matrix of this mesh for MVP transformations
     */
    glm::mat4 model;

private:
    std::vector<Vertex> m_vertices;
    std::vector<uint16_t> m_indices;
};
}
}
}

#endif // UNICORN_VIDEO_GEOMETRY_MESH_HPP