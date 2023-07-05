/*
 * Scene.hpp
 *
 *  Class for representing a scene. Can have multiple child nodes (objects).
 *  Has a rendering function that takes care of rendering all objects in the scene.
 *  by Stefanie Zollmann
 *
 */
#ifndef SCENE_HPP
#define SCENE_HPP

#include <vector>
#include "Object.hpp"
#include "Group.hpp"


//!  Scene.
/*!
 Basic scene represenation consisting of a couple of objects
 */
class Scene{
    
    public:
        Scene(){};
        ~Scene();
        //! render
        /*! Render all objects in the scene. Will call individal render methods. */
        void render(Camera* camera);
        //! addObject
        /*! Add an object to the scene. */
        /*void addObject(Object *object);*/
        void addObject(Group* object);
        //! set the Render Mode 
        void setRenderMode(float mode);
        //! get the Render Mode
        float getRenderMode(){return renderMode;};
    
    private:
        //std::vector<Object*> sceneObjects; //stores all objects in the scene
        std::vector<Group*> sceneObjects;
        float renderMode; //stores the rendermode for this scene (can be used to change the rendering for the complete scene)
    
    
};


#endif

