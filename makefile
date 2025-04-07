# Definición de variables
CXX := g++

CXXFLAGS := -Wall -std=c++11

OBJFILES := main.o Consulta.o DtConsulta.o DtFecha.o DtGato.o DtPerro.o Dtmascota.o gato.o mascota.o perro.o socio.o

TARGET := programa

# Regla principal
$(TARGET): $(OBJFILES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJFILES)

# Reglas
