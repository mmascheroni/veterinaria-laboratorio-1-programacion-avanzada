# Definición de variables
CXX := g++
CXXFLAGS := -Wall -std=c++11

OBJFILES := main.o Consulta.o DtConsulta.o DtFecha.o DtGato.o DtPerro.o DtMascota.o Gato.o Mascota.o Perro.o Socio.o

TARGET := programa

# Regla principal
$(TARGET): $(OBJFILES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJFILES)

# Regla para limpiar archivos compilados
clean:
	rm -f $(OBJFILES) $(TARGET)
