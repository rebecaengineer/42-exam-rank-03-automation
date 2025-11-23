# 🎓 42 Exam Rank 03 - Sistema de Práctica Automatizado 🚀

¡Sistema completo de práctica para el **Exam Rank 03** de 42 School! Incluye validación automática, seguimiento de progreso, material educativo detallado y soluciones comentadas.

## ⚡ **Características Principales**

**🔧 Sistema de Práctica Automatizado:**
- Menús guiados paso a paso
- Ejercicios aleatorios o específicos
- 2 niveles progresivos (Level 1 y Level 2)
- Tests automáticos con validación inmediata
- Tracking de progreso persistente

**📚 Material Educativo Completo:**
- Guías de debugging (gdb, valgrind)
- Referencias rápidas de C (malloc, sizeof, punteros)
- READMEs detallados por ejercicio
- Soluciones comentadas línea por línea
- Múltiples enfoques cuando aplica

**✅ Soluciones Validadas:**
- Código funcional verificado
- Versiones con y sin comentarios
- Explicaciones paso a paso de algoritmos
- Comparativas entre técnicas (backtracking vs máscaras)

---

## 📋 Requisitos

- Sistema operativo Unix/Linux o macOS
- Compilador GCC
- Bash shell

---

## 🛠 **Instalación Rápida**

```bash
# Clonar el repositorio
git clone https://github.com/rebecaengineer/42-exam-rank-03-automation.git

# Entrar al directorio
cd 42-exam-rank-03-automation

# 🚀 INICIAR SISTEMA DE PRÁCTICA
./exam.sh
```

---

## 📦 **Estructura del Proyecto**

```
42-exam-rank-03-automation/
├── exam.sh                           # 🚀 Sistema principal de práctica
├── README.md                         # 📖 Este archivo
│
├── level-1/                          # 🟢 Ejercicios Nivel 1 (Básicos)
│   ├── filter/
│   │   ├── grademe/test.sh          # ✅ Tests automáticos
│   │   ├── subject.txt              # 📄 Enunciado en inglés
│   │   └── subject-es.txt           # 📄 Enunciado en español
│   ├── ft_scanf/
│   │   ├── grademe/test.sh
│   │   ├── subject.txt
│   │   ├── subject-es.txt
│   │   └── explicaciones.md
│   └── broken_GNL/
│       ├── grademe/test.sh
│       ├── subject.txt
│       ├── subject-es.txt
│       └── given_code*.c/h          # 🎁 Código proporcionado
│
├── level-2/                          # 🔴 Ejercicios Nivel 2 (Avanzados)
│   ├── permutations/
│   ├── powerset/
│   ├── n_queens/
│   ├── rip/
│   └── tsp/
│       └── grademe/test.sh
│
├── rendu3/                           # 💎 Soluciones validadas (Referencia)
│   ├── README.md
│   ├── Comparativa powerset_vs_permutations.md
│   ├── filter/filter.c
│   ├── ft_scanf/
│   │   ├── ft_scanf.c
│   │   └── readme_ft_scanf.md       # 📚 Explicación detallada
│   ├── broken_GNL/
│   │   ├── get_next_line.c
│   │   ├── get_next_line_comentado.c
│   │   └── readme_broken_gnl.md     # 🐛 8 errores explicados
│   ├── permutations/
│   │   ├── permutations.c
│   │   ├── permutations.h
│   │   └── readme_permutations.md   # 🔄 Algoritmo backtracking
│   ├── powerset/
│   │   ├── powerset_bits.c          # 🎭 Solución con máscaras
│   │   ├── powerset_bits.h
│   │   ├── powerset_backtraking.c   # 🔄 Solución con backtracking
│   │   ├── powerset_backtraking.h
│   │   └── EXPLICACION_BACKTRACKING.md
│   ├── n_queens/
│   │   ├── n_queens.c
│   │   └── n_queens.h
│   ├── rip/rip.c                    # ⚖️ Balanceo de paréntesis
│   └── tsp/tsp.c                    # 🗺️ Traveling Salesman Problem
│
├── rendu/                            # 🔧 Zona de trabajo (auto-generada, ignorada en git)
└── exam_progress/                    # 📊 Seguimiento de progreso
    ├── level1_done.txt
    └── level2_done.txt
```

---

## 🎮 **Uso del Sistema**

### **Método Principal:**
```bash
./exam.sh      # Acceso al sistema de práctica completo
```

### **Menú Principal:**
```
═══════════════════════════════════════════════
   🎓 EXAM RANK 03 - Sistema de Práctica
═══════════════════════════════════════════════

1. 🎲 Practicar ejercicios (aleatorio de todos los niveles)
2. 🟢 Practicar Level 1 (aleatorio)
3. 🔴 Practicar Level 2 (aleatorio)
4. 🎯 Seleccionar ejercicio específico
5. 📊 Ver progreso
6. 🗑️  Limpiar progreso
7. 🚪 Salir
```

---

## 🎯 **Workflow de Práctica**

### **Flujo Completo:**

1. **Lanza el sistema:**
   ```bash
   ./exam.sh
   ```

2. **Selecciona un modo:**
   - Aleatorio de todos los niveles
   - Aleatorio por nivel específico
   - Ejercicio específico por nombre

3. **Lee el enunciado:**
   - El sistema muestra automáticamente el `subject.txt`
   - También disponible en español: `subject-es.txt`

4. **Implementa tu solución:**
   - Programa en el directorio del ejercicio: `level-X/ejercicio/`
   - Usa el editor que prefieras (vim, nano, vscode, etc.)

5. **Validación automática:**
   - El sistema ejecuta `grademe/test.sh` automáticamente
   - Recibe feedback inmediato (PASS/FAIL)

6. **Resultado:**
   - ✅ **Si pasas:** Se marca como completado y avanza tu progreso
   - ❌ **Si fallas:** Puedes reintentar o consultar soluciones en `rendu3/`

7. **Consulta referencias:**
   - Soluciones validadas en `rendu3/`
   - READMEs explicativos por ejercicio
   - Comparativas de técnicas

---

## 📚 **Material Educativo Incluido**

### **📖 Guías por Ejercicio** (rendu3/)
| Guía | Contenido |
|------|-----------|
| **[readme_broken_gnl.md](rendu3/broken_GNL/readme_broken_gnl.md)** | 🐛 8 errores críticos explicados paso a paso |
| **[readme_ft_scanf.md](rendu3/ft_scanf/readme_ft_scanf.md)** | 📝 Argumentos variables, parsing, dudas frecuentes |
| **[readme_permutations.md](rendu3/permutations/readme_permutations.md)** | 🔄 Backtracking con contador de frecuencias |

### **🔬 Comparativas y Estrategias**
| Documento | Descripción |
|-----------|-------------|
| **[Comparativa powerset_vs_permutations.md](<rendu3/Comparativa powerset_vs_permutations.md>)** | 🎭 Cuándo usar máscaras vs recursión, checklist para el examen |
| **[EXPLICACION_BACKTRACKING.md](rendu3/powerset/EXPLICACION_BACKTRACKING.md)** | 🔄 Explicación detallada de backtracking aplicado a powerset |

---

## 💡 **Ejercicios Disponibles**

### **🟢 Level 1** (Básicos - 3 ejercicios)

| Ejercicio | Descripción | Conceptos Clave |
|-----------|-------------|-----------------|
| **filter** | Reemplazo de strings con asteriscos | `read`, `write`, `memmem`, gestión memoria |
| **ft_scanf** | Implementación de scanf (%s, %d, %c) | `va_list`, parsing, streams, construcción de números |
| **broken_GNL** | Encontrar y reparar 8 errores en get_next_line | Debugging, punteros, unsigned/signed, EOF |

### **🔴 Level 2** (Avanzados - 5 ejercicios)

| Ejercicio | Descripción | Conceptos Clave |
|-----------|-------------|-----------------|
| **permutations** | Generación de permutaciones en orden alfabético | Backtracking, contador de frecuencias, recursión |
| **powerset** | Subconjuntos que suman un valor objetivo | Máscaras de bits o backtracking recursivo |
| **n_queens** | Problema de las N reinas | Backtracking, validación de posiciones |
| **rip** | Balanceo mínimo de paréntesis | Backtracking en dos fases, validación |
| **tsp** | Traveling Salesman Problem (TSP) | Permutaciones, distancia euclidiana, optimización |

---

## 🔒 Sistema de Protección

### **rendu3/** = Soluciones Validadas (Permanente)
- ✅ Todas las soluciones funcionales verificadas
- ✅ Versiones con y sin comentarios
- ✅ READMEs educativos con explicaciones detalladas
- ✅ **NUNCA se modifican** durante la práctica
- ✅ Tu referencia cuando te atascas

### **rendu/** = Zona de Trabajo (Temporal)
- 🔧 Se crea automáticamente al practicar
- 🔧 Espacio de trabajo para implementar soluciones
- 🔧 **Ignorada en git** (no se sube al repositorio)
- 🔧 Puede limpiarse sin perder nada importante

---

## 🧪 Sistema de Tests

Todos los ejercicios incluyen tests automáticos en `grademe/test.sh`:

### **Level 1** (Tests completos)
- **filter**: Casos de reemplazo, edge cases, validación de argumentos
- **ft_scanf**: Parsing de strings, integers, characters
- **broken_GNL**: Lectura línea por línea, diferentes casos

### **Level 2** (Tests básicos)
- Compilación + ejecución básica
- Verificación del output por el estudiante

---

## 📊 Seguimiento de Progreso

El sistema mantiene registro automático en:
- `exam_progress/level1_done.txt`
- `exam_progress/level2_done.txt`

**Ver progreso:**
```bash
./exam.sh → Opción 5
```

**Resetear progreso:**
```bash
./exam.sh → Opción 6
```

---

## 📝 **Tips para el Examen**

### **✅ Antes de Empezar**
1. 📖 **Lee completamente** el enunciado del subject
2. ✍️ **Identifica** las funciones permitidas (allowed functions)
3. 🗺️ **Planifica** tu solución antes de codificar
4. 💭 **Piensa** en casos edge desde el inicio

### **💻 Durante el Desarrollo**
1. **Compila frecuentemente:**
   ```bash
   gcc -Wall -Wextra -Werror archivo.c
   ```
2. **Prueba casos edge:** NULL, vacío, límites, casos especiales
3. **Usa debugging:** gdb, valgrind, prints estratégicos
4. **Verifica memoria:** Comprueba siempre las fugas con valgrind
5. **Lee mensajes de error:** Los warnings son tus amigos

### **🆘 Si te Atascas**
1. 📚 **Revisa** el README del ejercicio en `rendu3/`
2. 💡 **Consulta** soluciones comentadas para entender el enfoque
3. 🔄 **Compara** tu implementación con las soluciones de referencia
4. 🎯 **Analiza** las diferencias y aprende del error

### **⚡ Estrategias Específicas para Rank 03**

#### **Para broken_GNL:**
- Lee línea por línea el código proporcionado
- Busca los 8 errores típicos (ver readme_broken_gnl.md)
- Verifica manejo de EOF, buffer, y punteros

#### **Para ft_scanf:**
- Domina `va_list` y funciones variádicas
- Practica parsing de strings, ints y chars
- Revisa cómo construir números desde caracteres

#### **Para permutations/powerset:**
- Entiende la diferencia entre backtracking y máscaras
- Consulta la comparativa en `rendu3/`
- Practica ambos enfoques

---

## ⚙️ Compilación

### **Flags estándar**
```bash
gcc -Wall -Wextra -Werror archivo.c -o programa
```

### **Con debugging**
```bash
gcc -Wall -Wextra -Werror -g archivo.c -o programa
```

### **Con librerías matemáticas** (tsp)
```bash
gcc -Wall -Wextra -Werror archivo.c -lm -o programa
```

---

## 🆘 **Resolución de Problemas**

### **❌ Error: "No se encontró script de test"**
```bash
chmod +x level-X/ejercicio/grademe/test.sh
```

### **❌ Error de compilación**
- ✅ Verifica nombre del archivo (case-sensitive)
- ✅ Revisa funciones permitidas en el subject
- ✅ Compila con flags obligatorios: `-Wall -Wextra -Werror`
- ✅ Asegúrate de incluir todas las librerías necesarias

### **❌ Segmentation fault**
```bash
# Usa valgrind para detectar errores de memoria
valgrind ./tu_programa

# Usa gdb para debugging interactivo
gcc -g archivo.c -o programa
gdb ./programa
```

### **❌ Tests fallan pero compila**
- ✅ Revisa el output esperado vs el tuyo
- ✅ Verifica casos edge (NULL, vacío, límites)
- ✅ Comprueba el formato exacto del output
- ✅ Lee los mensajes de error del test script

### **❌ Memory leaks**
```bash
# Detecta y corrige fugas de memoria
valgrind --leak-check=full ./tu_programa
```

---

## 🤝 **Contribuir**

Las contribuciones son bienvenidas. Este repositorio está estructurado para ser:

- ✅ **Educativo:** READMEs detallados por ejercicio con explicaciones paso a paso
- ✅ **Profesional:** Código limpio con comentarios útiles y buenas prácticas
- ✅ **Práctico:** Sistema automatizado de validación y testing
- ✅ **Completo:** Múltiples enfoques de solución donde aplica

### **Cómo contribuir:**

1. Fork el proyecto
2. Crea una rama para tu feature (`git checkout -b feature/MejoraSistema`)
3. Commit tus cambios (`git commit -m 'Add: nueva funcionalidad X'`)
4. Push a la rama (`git push origin feature/MejoraSistema`)
5. Abre un Pull Request

---

## ⚠️ **Disclaimer**

Este proyecto **no está oficialmente afiliado con 42 School**. Es una herramienta de práctica creada por y para estudiantes.

- ⚖️ Todos los enunciados (`subject.txt`) pertenecen a 42 School
- 🎓 Las soluciones son implementaciones educativas para propósitos de aprendizaje
- 📚 El material está destinado para **práctica y preparación**, no para copiar en exámenes

---

## 📝 **Notas Importantes**

- 🔒 **Protección de soluciones**: `rendu3/` contiene soluciones validadas, practica sin miedo a perderlas
- 🔧 **Zona de trabajo**: `rendu/` se ignora en git, es temporal y puede limpiarse
- ✅ **Tests automáticos**: Validan tu código igual que en el examen real
- 📚 **Material educativo**: READMEs explican conceptos difíciles paso a paso
- 🎯 **Sistema de progreso**: Tu avance se guarda automáticamente

---

## 🙏 **Agradecimientos**

- A la comunidad de 42 School
- A todos los estudiantes que han contribuido con ejercicios y mejoras
- A los creadores del sistema de exámenes original de 42
- A todos los que comparten conocimiento abiertamente

---

## 📜 **Licencia**

Este proyecto está bajo una licencia de código abierto para propósitos educativos.

- ✅ Libre para usar con fines de aprendizaje
- ✅ Libre para modificar y mejorar
- ✅ Libre para compartir con la comunidad

**Todos los enunciados de ejercicios pertenecen a 42 School.**

---

## 🚀 **¡Comienza Ahora!**

```bash
./exam.sh
```

**¡Buena suerte en tu preparación para el Exam Rank 03! 🍀**

---

<div align="center">

**Made with ❤️ by [rebecaengineer](https://github.com/rebecaengineer) - estudiante de 42 School**

</div>
