#include <string>
#include <fstream>
#include <iostream>
#include <iterator>

#include "glad/glad.h"
#include <GLFW/glfw3.h>

#ifndef _SHADER_H_
#define _SHADER_H_
// Class for a shader loader
class shader
{
   public:
      shader()
      {
      };
      const GLuint getSource() const;

      shader( const shader& other )
      {
         source = other.getSource();
         name = other.name;
      };
      shader(GLuint);
      bool open(std::string);
      bool compile();
      bool link(GLuint& program);
      void cleanup();

      void setSource(GLuint& s)
      {
         source = s;
      };
      std::string name;
   private:
     GLuint source;

};

#endif
