#pragma once

#include <gl/glew.h>
#define GLFW_DLL
#include <GLFW/glfw3.h>
#include <stdio.h>

#include "Camera.h"
#include "UniformMarchingCubes.h"

struct DebugScene
{
	int fillmode;
	GLuint points_vbo;
	GLuint colors_vbo;
	GLuint vao;
	GLuint ibo;

	GLuint vertex_shader;
	GLuint fragment_shader;
	GLuint shader_program;

	GLuint shader_projection;
	GLuint shader_view;
	GLuint shader_mul_clr;

	struct FPSCamera camera;
	struct UMC_Chunk test_chunk;
};

int DebugScene_init(struct DebugScene* out, struct RenderInput* render_input);
int DebugScene_cleanup(struct DebugScene* scene);
int DebugScene_update(struct DebugScene* scene, struct RenderInput* input);
int DebugScene_render(struct DebugScene* scene, struct RenderInput* input);
