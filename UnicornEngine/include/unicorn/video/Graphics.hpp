/*
* Copyright (C) 2017 by Godlike
* This code is licensed under the MIT license (MIT) 
* (http://opensource.org/licenses/MIT)
*/

#ifndef UNICORN_VIDEO_GRAPHICS_HPP
#define UNICORN_VIDEO_GRAPHICS_HPP

namespace unicorn
{
namespace video
{
class Renderer;

/** @brief Abstract graphics renderer
 *
 *  Initializes graphics system and proxies render calls to the renderer
 */
class Graphics
{
public:
    /** @brief Constructs an empty graphics system */
    Graphics();

    /** @brief  Destructs a graphics system
     *
     *  Also calls Deinit() to release all resources
     *
     *  @sa Deinit()
     */
    ~Graphics();

    Graphics(const Graphics& other) = delete;
    Graphics(const Graphics&& other) = delete;
    Graphics& operator=(const Renderer& other) = delete;
    Graphics& operator=(const Graphics&& other) = delete;

    /** @brief  Initializes the graphics system
     *
     *  Initializes @ref m_pRenderer
     *
     *  @return @c true if initialization was successful, @c false otherwise
     */
    bool Init();

    /** @brief  Deinitializes the graphics system
     *
     *  Deinitializes @ref m_pRenderer
     */
    void Deinit();

    /** @brief  Graphics renderer loop */
    void Render();

private:
    //! Flag describing if graphics were initialized
    bool m_isInitialized;

    //! Pointer to renderer
    Renderer* m_pRenderer;
};
}
}

#endif // UNICORN_VIDEO_GRAPHICS_HPP