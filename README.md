# Exam Rank 03 - Automation

Herramienta de práctica para el Exam Rank 03 de 42 con validación automática.

## Instalación

```bash
git clone git@github.com:rebecaengineer/42-exam-rank-03-automation.git
cd 42-exam-rank-03-automation
./exam.sh
```

Requisitos: Unix/Linux, gcc/clang, make, bash

## Uso

### Inicio rápido
```bash
./exam.sh                    # Lanzar menú principal
cd rendu/ejercicio           # Crear workspace
vim ejercicio.c              # Implementar solución
# Validar desde el menú
```

### Funcionalidades
- Práctica aleatoria por nivel o global
- Tests automáticos integrados
- Tracking de progreso persistente
- Subjects bilingües (ES/EN)

## Ejercicios

**Level 1:** broken_GNL, filter, ft_scanf

**Level 2:** n_queens, permutations, powerset, rip, tsp

## Estructura

```
.
├── exam.sh              # Script principal
├── level-1/             # Ejercicios L1 con tests
├── level-2/             # Ejercicios L2 con tests
├── rendu/               # Tu workspace (manual)
├── rendu3/              # Soluciones validadas (auto)
└── exam_progress/       # Estado (auto)
```

## Workflow

1. Ejecuta `./exam.sh` y selecciona modo de práctica
2. Lee el subject que se muestra
3. Crea `rendu/ejercicio/ejercicio.c`
4. Codifica tu solución
5. Valida desde el menú (copia + tests + guardado automático)

**Nota:** Para `broken_GNL` usa `get_next_line.c` como nombre de archivo.

## Validación

El sistema ejecuta tests en `grademe/` de cada ejercicio:
- Compila tu código
- Ejecuta casos de prueba
- Muestra resultado (verde/rojo)
- Guarda en `rendu3/` si pasa

## Tips

- Practica el workflow completo (crear dirs, git add, validar)
- Usa modo aleatorio para simular presión del examen
- Revisa `rendu3/` para ver soluciones que funcionaron
- El progreso se guarda automáticamente por nivel

---

*Proyecto no oficial. Herramienta de práctica para estudiantes de 42.*
