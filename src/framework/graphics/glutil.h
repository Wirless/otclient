/*
 * Copyright (c) 2010-2012 OTClient <https://github.com/edubart/otclient>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */


#ifndef GLUTIL_H
#define GLUTIL_H

#include <GLES2/gl2.h>
#if OPENGL_ES==2
#include <GLES2/gl2.h>
#elif OPENGL_ES==1
#include <GLES/gl.h>

// define OpenGL 2.0 API just to make compile, it wont actually be used
inline void glBindFramebuffer (GLenum target, GLuint framebuffer) { }
inline void glDeleteFramebuffers (GLsizei n, const GLuint* framebuffers) { }
inline void glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) { }
inline void glGenFramebuffers (GLsizei n, GLuint* framebuffers) { }
inline void glGenerateMipmap (GLenum target) { }
inline GLenum GL_APIENTRY glCheckFramebufferStatus (GLenum target) { return GL_NONE; }
inline GLuint glCreateShader (GLenum type) { return 0; }
inline void glDeleteShader (GLuint shader) { }
inline void glCompileShader (GLuint shader) { }
inline void glAttachShader (GLuint program, GLuint shader) { }
inline void glDetachShader (GLuint program, GLuint shader) { }
inline void glShaderSource (GLuint shader, GLsizei count, const GLchar** string, const GLint* length) { }
inline void glGetShaderiv (GLuint shader, GLenum pname, GLint* params) { }
inline void glGetShaderInfoLog (GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* infolog) { }
inline void glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision) { }
inline void glGetShaderSource (GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source) { }
inline GLuint glCreateProgram (void) { return 0; }
inline void glDeleteProgram (GLuint program) { }
inline void glUseProgram (GLuint program) { }
inline void glValidateProgram (GLuint program) { }
inline void glLinkProgram (GLuint program) { }
inline void glGetProgramiv (GLuint program, GLenum pname, GLint* params) { }
inline void glGetProgramInfoLog (GLuint program, GLsizei bufsize, GLsizei* length, GLchar* infolog) { }
inline void glBindAttribLocation (GLuint program, GLuint index, const GLchar* name) { }
inline int  glGetAttribLocation (GLuint program, const GLchar* name) { return 0; }
inline int  glGetUniformLocation (GLuint program, const GLchar* name) { return 0; }
inline void glUniform1f (GLint location, GLfloat x) { }
inline void glUniform1fv (GLint location, GLsizei count, const GLfloat* v) { }
inline void glUniform1i (GLint location, GLint x) { }
inline void glUniform1iv (GLint location, GLsizei count, const GLint* v) { }
inline void glUniform2f (GLint location, GLfloat x, GLfloat y) { }
inline void glUniform2fv (GLint location, GLsizei count, const GLfloat* v) { }
inline void glUniform2i (GLint location, GLint x, GLint y) { }
inline void glUniform2iv (GLint location, GLsizei count, const GLint* v) { }
inline void glUniform3f (GLint location, GLfloat x, GLfloat y, GLfloat z) { }
inline void glUniform3fv (GLint location, GLsizei count, const GLfloat* v) { }
inline void glUniform3i (GLint location, GLint x, GLint y, GLint z) { }
inline void glUniform3iv (GLint location, GLsizei count, const GLint* v) { }
inline void glUniform4f (GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w) { }
inline void glUniform4fv (GLint location, GLsizei count, const GLfloat* v) { }
inline void glUniform4i (GLint location, GLint x, GLint y, GLint z, GLint w) { }
inline void glUniform4iv (GLint location, GLsizei count, const GLint* v) { }
inline void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) { }
inline void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) { }
inline void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) { }
inline void glVertexAttrib1f (GLuint indx, GLfloat x) { }
inline void glVertexAttrib1fv (GLuint indx, const GLfloat* values) { }
inline void glVertexAttrib2f (GLuint indx, GLfloat x, GLfloat y) { }
inline void glVertexAttrib2fv (GLuint indx, const GLfloat* values) { }
inline void glVertexAttrib3f (GLuint indx, GLfloat x, GLfloat y, GLfloat z) { }
inline void glVertexAttrib3fv (GLuint indx, const GLfloat* values) { }
inline void glVertexAttrib4f (GLuint indx, GLfloat x, GLfloat y, GLfloat z, GLfloat w) { }
inline void glVertexAttrib4fv (GLuint indx, const GLfloat* values) { }
inline void glVertexAttribPointer (GLuint indx, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* ptr) { }

#else
#define GLEW_STATIC
#include <GL/glew.h>
#endif

#endif
