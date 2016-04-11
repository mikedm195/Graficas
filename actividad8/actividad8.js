/*
    Miguel Alberto Del Moral González
    A01015019

    Tarea 8 WebGL

 */

//Shader para la posición y tamaño de los puntos
var VSHADER_SOURCE =
    'attribute vec4 a_Position;\n' + // attribute variable
    'void main() {\n' +
    '  gl_Position = a_Position;\n' +
    '  gl_PointSize = 8.0;\n' +
    '}\n';

// Shader para los colores de los puntos
var FSHADER_SOURCE =
    'precision mediump float;\n' +
    'uniform vec4 u_FragColor;\n' +  // uniform変数
    'void main() {\n' +
    '  gl_FragColor = u_FragColor;\n' +
    '}\n';


//Función para dibujar la M
function drawM(gl, a_Position, x) {

    // Dibujar primer palo de la M
    for (var i = 0.0; i < 0.4; i += 0.01) {
        gl.vertexAttrib3f(a_Position, x - 0.5, i, 0.0);
        gl.drawArrays(gl.POINTS, 0, 1);
    }

    //Dibujar la linea deagonal de la M lado izquierdo
    for (var i = 0.1; i > 0.0; i -= 0.01){
        gl.vertexAttrib3f(a_Position, x - 0.5 + i, 0.4 - i*2, 0.0);
        gl.drawArrays(gl.POINTS, 0, 1);
    }

    //Dibujar la linea deagonal de la M lado derecho
    for (var i = 0.1; i > 0.0; i -= 0.01){
        gl.vertexAttrib3f(a_Position, x - 0.3 - i, 0.4 - i*2, 0.0);
        gl.drawArrays(gl.POINTS, 0, 1);
    }

    //Dibujar egundo palo de la M
    for (var i = 0.0; i < 0.4; i += 0.01){
        gl.vertexAttrib3f(a_Position, x - 0.3, i, 0.0);
        gl.drawArrays(gl.POINTS, 0, 1);
    }

    //Punto de la letra inicial
    gl.vertexAttrib3f(a_Position, x - 0.27, 0.0, 0.0);
    gl.drawArrays(gl.POINTS, 0, 1);

}

//Función para dibujar la A
function drawA(gl, a_Position, x) {

    //Palo izquierdo de la A
    for (var i = 0.0; i < 0.4; i += 0.01) {
        gl.vertexAttrib3f(a_Position, x - 0.5, i, 0.0);
        gl.drawArrays(gl.POINTS, 0, 1);
    }
    
    //Palo superior A Horizontal    
    for (var i = 0.0; i < 0.20; i += 0.01){
        gl.vertexAttrib3f(a_Position, x - 0.5 + i, 0.4, 0.0);
        gl.drawArrays(gl.POINTS, 0, 1);
    }
    
    //Palo inferior A Horizontal    
    for (var i = 0.0; i < 0.20; i += 0.01){
        gl.vertexAttrib3f(a_Position, x - 0.5 + i, 0.25, 0.0);
        gl.drawArrays(gl.POINTS, 0, 1);
    }

    //Palo derecho de la A
    for (var i = 0.0; i < 0.4; i += 0.01){
        gl.vertexAttrib3f(a_Position, x - 0.3, i, 0.0);
        gl.drawArrays(gl.POINTS, 0, 1);
    }

    //Punto de la letra inicial
    gl.vertexAttrib3f(a_Position, x - 0.27, 0.0, 0.0);
    gl.drawArrays(gl.POINTS, 0, 1);

}

//Función para dibujar la D
function drawD(gl, a_Position, x) {

    // Dibujar primer palo de la M
    for (var i = 0.0; i < 0.4; i += 0.01) {
        gl.vertexAttrib3f(a_Position, x - 0.5, i, 0.0);
        gl.drawArrays(gl.POINTS, 0, 1);
    }
    
    //Linea inclinada D arriba
    for (var i = 0.0; i < 0.20; i += 0.01){
        gl.vertexAttrib3f(a_Position, x - 0.5 + i, 0.4 - i, 0.0);
        gl.drawArrays(gl.POINTS, 0, 1);
    }
    
    //Linea inclinada D abajo
    for (var i = 0.0; i < 0.20; i += 0.01){
        gl.vertexAttrib3f(a_Position, x - 0.5 + i, 0.0 + i, 0.0);
        gl.drawArrays(gl.POINTS, 0, 1);
    }

    //Punto de la letra inicial
    gl.vertexAttrib3f(a_Position, x - 0.27, 0.0, 0.0);
    gl.drawArrays(gl.POINTS, 0, 1);

}

function drawG(gl, a_Position, x){
    //Primera linea de G
    for (var i = 0.0; i < 0.20; i += 0.01){
        gl.vertexAttrib3f(a_Position, x - 0.15 + i/2, 0.0 + i, 0.0);
        gl.drawArrays(gl.POINTS, 0, 1);
    }
    
    //Segunda linea de G
    for (var i = 0.0; i < 0.22; i += 0.01){
        gl.vertexAttrib3f(a_Position, x - 0.15 - i/2, 0.0 + i, 0.0);
        gl.drawArrays(gl.POINTS, 0, 1);
    }

    //Tercera linea de G
    for (var i = 0.0; i < 0.22; i += 0.01){
        gl.vertexAttrib3f(a_Position, x - 0.25 + i/2, 0.20 + i, 0.0);
        gl.drawArrays(gl.POINTS, 0, 1);
    }

    //Dibujo del palo chico horizontal de la G
    for (var i = 0.0; i < 0.1; i += 0.01){
        gl.vertexAttrib3f(a_Position, x - 0.15 + i, 0.2, 0.0);
        gl.drawArrays(gl.POINTS, 0, 1);
    }

    //Dibuja Punto
    gl.vertexAttrib3f(a_Position, x - 0.02, 0.0, 0.0);
    gl.drawArrays(gl.POINTS, 0, 1);

}

function main() {
    // Retrieve <canvas> element
    var canvas = document.getElementById('webgl');

    // Get the rendering context for WebGL
    var gl = getWebGLContext(canvas);
    if (!gl) {
        console.log('Failed to get the rendering context for WebGL');
        return;
    }

    // Initialize shaders
    if (!initShaders(gl, VSHADER_SOURCE, FSHADER_SOURCE)) {
        console.log('Failed to intialize shaders.');
        return;
    }

    // Get the storage location of a_Position
    var a_Position = gl.getAttribLocation(gl.program, 'a_Position');
    if (a_Position < 0) {
        console.log('Failed to get the storage location of a_Position');
        return;
    }

    // Get the storage location of u_FragColor
    var u_FragColor = gl.getUniformLocation(gl.program, 'u_FragColor');
    if (!u_FragColor) {
        console.log('Failed to get the storage location of u_FragColor');
        return;
    }

    //Color blanco de fondo
    gl.clearColor(1.0, 1.0, 1.0, 1.0);
    gl.clear(gl.COLOR_BUFFER_BIT);

    gl.uniform4f(u_FragColor, 0.0, 0.0, 0.0, 1.0);//Letras de color negro

    drawM(gl, a_Position, -0.2);//Dibuja M
    drawA(gl, a_Position, 0.08);//Dibuja A
    drawD(gl, a_Position, 0.35);//Dibuja D
    drawM(gl, a_Position, 0.62);//Dibuja M
    drawG(gl, a_Position, 0.65);//Dibuja G


}
