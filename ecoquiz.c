#include <stdio.h>
#include <locale.h>
#include <time.h> // Incluindo a biblioteca para trabalhar com o tempo
#include <limits.h> // Para definir o tempo recorde inicial como o máximo possível

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

int main() {
    setlocale(LC_ALL, "Portuguese");
    int score = 0;
    int OP, RT;
    double tempo_total = 0; // Variável para armazenar o tempo total
    double recorde = INT_MAX; // Inicializa o recorde com o maior valor possível

    inicio:  // Rótulo para voltar ao início

    system("cls");
    score = 0; // Reseta a pontuação ao reiniciar o quiz
    tempo_total = 0; // Reseta o tempo total ao reiniciar o quiz
    printf("Bem-vindo ao Quiz de Ecologia!\n\n");

    // Pergunta sobre a dificuldade
    printf("Escolha uma dificuldade:");
    printf("\nDigite 1 -> fácil\n");
    printf("\nDigite 2 -> difícil\n");
    scanf("%d", &OP);

    time_t inicio_tempo, fim_tempo; // Variáveis para armazenar o tempo de início e fim de cada pergunta

    if (OP == 1) {
        // Pergunta 1
        printf(YELLOW "\nPergunta 1: “Os impactos ambientais consequentes da mineração têm sido intensos e cada vez mais têm contribuído \npara a degradação do meio ambiente.” A partir dessa temática, é INCORRETO afirmar que:\n" RESET);
        printf("\na) A operação de garimpo emprega uma volumosa quantidade de pessoas, trazendo aos países, inúmeros benefícios como:\nalta produção, controle da produção e comercialização desses metais.\n");
        printf("\nb) O uso do mercúrio nas operações de garimpo é prejudicial à fauna e à saúde do homem.\n");
        printf("\nc) A mineração e o garimpo são atividades que exercem forte influência no ambiente natural e contribuem para a sua deterioração.\n");

        time(&inicio_tempo); // Início do cronômetro
        char resposta1;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta1);
        time(&fim_tempo); // Fim do cronômetro

        tempo_total += difftime(fim_tempo, inicio_tempo); // Calcula o tempo decorrido

        if (resposta1 == 'a' || resposta1 == 'A') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é A.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio; // Retorna ao início se o usuário quiser tentar novamente
            return 0;
        }
        printf("\n");

        // Pergunta 2
        printf(YELLOW "Pergunta 2: A atividade econômica e industrial que consiste na pesquisa, exploração, lavra (extração) e beneficiamento\nde minérios presentes no subsolo é o/a:\n" RESET);
        printf("a) Siderurgia\n");
        printf("b) Mineração\n");
        printf("c) Estrativismo vegetal\n");

        time(&inicio_tempo); // Início do cronômetro
        char resposta2;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta2);
        time(&fim_tempo); // Fim do cronômetro

        tempo_total += difftime(fim_tempo, inicio_tempo); // Calcula o tempo decorrido

        if (resposta2 == 'b' || resposta2 == 'B') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é b.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
        printf("\n");

        // Pergunta 3
        printf(YELLOW "Pergunta 3: Na mineração, os impactos ambientais são de grande porte e afetam vários elementos dos ecossistemas locais.\nConsiderando os impactos ambientais específicos da exploração do minério de ferro.\nMarque a alternativa que indica um deles:\n" RESET);
        printf("a) Poluição atmosférica causada pela queima necessária nas reservas como técnica de separação do minério das rochas\n");
        printf("b) Contaminação do solo em função da utilização maciça de pesticidas na fase de identificação das reservas minerais.\n");
        printf("c) Rompimento de barragens que concentram os resíduos minerais e poluição das águas superficiais.\n\n");

        time(&inicio_tempo); // Início do cronômetro
        char resposta3;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta3);
        time(&fim_tempo); // Fim do cronômetro

        tempo_total += difftime(fim_tempo, inicio_tempo); // Calcula o tempo decorrido

        if (resposta3 == 'c' || resposta3 == 'C') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é c.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
        printf("\n");

        // Pergunta 4
        printf(YELLOW "Pergunta 4: Indique a alternativa que apresenta um impacto ambiental provocado pelas atividades minerárias:\n" RESET);
        printf("a) Formação de chuvas ácidas\n");
        printf("b) Poluição das fontes de água\n");
        printf("c) Canalização dos córregos\n\n");

        time(&inicio_tempo); // Início do cronômetro
        char resposta4;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta4);
        time(&fim_tempo); // Fim do cronômetro

        tempo_total += difftime(fim_tempo, inicio_tempo); // Calcula o tempo decorrido

        if (resposta4 == 'b' || resposta4 == 'B') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é b.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
        printf("\n");

        // Pergunta 5
        printf(YELLOW "Pergunta 5: O processo de mineração tem forte impacto no relevo de uma região. Ele tem como uma de suas consequências a formação de?\n" RESET);
        printf("a) Montanhas\n");
        printf("b) Magnetismo\n");
        printf("c) Voçorocas\n\n");

        time(&inicio_tempo); // Início do cronômetro
        char resposta5;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta5);
        time(&fim_tempo); // Fim do cronômetro

        tempo_total += difftime(fim_tempo, inicio_tempo); // Calcula o tempo decorrido

        if (resposta5 == 'c' || resposta5 == 'C') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é b.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
        
        // Pergunta 6
        printf(YELLOW "A mineração pode levar à contaminação de água subterrânea devido a:\n" RESET);
        printf("a) Vazamento de produtos químicos tóxicos\n");
        printf("b) Filtração de água pura nas camadas profundas do solo\n");
        printf("c) Aumento da produção de água potável\n\n");

        time(&inicio_tempo); // Início do cronômetro
        char resposta6;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta5);
        time(&fim_tempo); // Fim do cronômetro

        tempo_total += difftime(fim_tempo, inicio_tempo); // Calcula o tempo decorrido

        if (resposta6 == 'a' || resposta6 == 'A') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é b.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
        
        // Pergunta 7
        printf(YELLOW "Pergunta 7: Qual é um dos principais impactos da mineração sobre a biodiversidade?\n" RESET);
        printf("a) Aumento da diversidade de espécies\n");
        printf("b) Destruição de habitats naturais\n");
        printf("c) Criação de novas reservas ambientais\n\n");

        time(&inicio_tempo); // Início do cronômetro
        char resposta7;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta5);
        time(&fim_tempo); // Fim do cronômetro

        tempo_total += difftime(fim_tempo, inicio_tempo); // Calcula o tempo decorrido

        if (resposta7 == 'b' || resposta7 == 'B') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é b.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
        

        // Pergunta 8
        printf(YELLOW "Pergunta 8: O que é frequentemente causado pela mineração em áreas florestais?\n" RESET);
        printf("a) Reflorestamento espontâneo\n");
        printf("b) Desmatamento e perda de vegetação nativa\n");
        printf("c) Aumento da área verde\n\n");

        time(&inicio_tempo); // Início do cronômetro
        char resposta8;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta5);
        time(&fim_tempo); // Fim do cronômetro

        tempo_total += difftime(fim_tempo, inicio_tempo); // Calcula o tempo decorrido

        if (resposta8 == 'b' || resposta8 == 'B') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é b.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }

        // Pergunta 9
        printf(YELLOW "Pergunta 9: O que é uma consequência comum das barragens de rejeitos em atividades de mineração?\n" RESET);
        printf("a) Criação de novos habitats para a fauna\n");
        printf("b) Risco de rompimento e desastres ambientais\n");
        printf("c) Redução da contaminação ambiental\n\n");

        time(&inicio_tempo); // Início do cronômetro
        char resposta9;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta5);
        time(&fim_tempo); // Fim do cronômetro

        tempo_total += difftime(fim_tempo, inicio_tempo); // Calcula o tempo decorrido

        if (resposta9 == 'b' || resposta9 == 'B') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é b.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
         
        
        // Pergunta 10
        printf(YELLOW "Pergunta 10: Como a mineração contribui para o aquecimento global?\n" RESET);
        printf("a) Emitindo grandes quantidades de gases de efeito estufa\n");
        printf("b) Absorvendo mais CO2 da atmosfera\n");
        printf("c) Reduzindo as emissões de carbono\n\n");

        time(&inicio_tempo); // Início do cronômetro
        char resposta10;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta5);
        time(&fim_tempo); // Fim do cronômetro

        tempo_total += difftime(fim_tempo, inicio_tempo); // Calcula o tempo decorrido

        if (resposta10 == 'a' || resposta10 == 'A') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é b.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
        printf("\n");

        // Exibir pontuação final
        printf("Parabéns! Você completou o quiz de ecologia.\n");
        printf("Sua pontuação final é: %d\n", score);
        printf("Tempo total gasto: %.2f segundos\n", tempo_total);

        // Verificar e atualizar o recorde
        if (tempo_total < recorde) {
            recorde = tempo_total;
            
            printf("Novo recorde! Seu tempo foi o mais rápido até agora.\n");
        } else {
            printf("O recorde atual é: %.2f segundos\n", recorde);
        }
    }

    if (OP == 2) {
    // Pergunta 1
    printf("Pergunta 1: A drenagem ácida de minas é um dos problemas ambientais mais graves associados à mineração. Qual das seguintes condições geológicas facilita a geração de drenagem ácida?\n");
    printf("a) Existência de minerais sulfetados como a pirita\n");
    printf("b) Presença de rochas ricas em carbonatos\n");
    printf("c) Alta concentração de minerais silicatados\n");
    printf("d) Abundância de minerais oxidados\n");

    time(&inicio_tempo);
    char respostaA;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaA);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaA == 'a' || respostaA == 'A') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é a.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }
    
    // Pergunta 2
    printf("Pergunta 2: Na mineração de ouro, a técnica de cianetação é amplamente utilizada para extrair o metal precioso. Qual é a principal preocupação ambiental associada ao uso de cianeto?\n");
    printf("a) Emissão de mercúrio para a atmosfera\n");
    printf("b) Contaminação de corpos d'água com resíduos cianídricos\n");
    printf("c) Liberação de partículas de sílica\n");
    printf("d) Erosão acelerada do solo\n");

    time(&inicio_tempo);
    char respostaB;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaB);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaB == 'b' || respostaB == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 3
    printf("Pergunta 3: A mineração de carvão é uma das principais fontes de emissões de gases de efeito estufa. Qual processo específico de mineração contribui para essas emissões?\n");
    printf("a) Oxidação de pirita\n");
    printf("b) Liberação de metano, um potente gás de efeito estufa\n");
    printf("c) Combustão espontânea de carvão\n");
    printf("d) Erosão do solo devido à mineração a céu aberto\n");

    time(&inicio_tempo);
    char respostaC;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaC);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaC == 'b' || respostaC == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 4
    printf("Pergunta 4: Quais das seguintes práticas podem reduzir os impactos ambientais da mineração a céu aberto?\n");
    printf("a) Aumento da profundidade das minas\n");
    printf("b) Implementação de práticas de reflorestamento e recuperação de vegetação nativa\n");
    printf("c) Expansão das áreas de mineração\n");
    printf("d) Construção de grandes reservatórios para armazenar rejeitos\n");

    time(&inicio_tempo);
    char respostaD;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaD);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaD == 'b' || respostaD == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 5
    printf("Pergunta 5: A mineração submarina é uma prática emergente com sérias implicações ambientais. Qual é o impacto mais significativo associado a esta atividade?\n");
    printf("a) Aumento da poluição sonora nos oceanos\n");
    printf("b) Destruição de habitats marinhos, como recifes de corais e pradarias submarinas\n");
    printf("c) Acidificação dos oceanos\n");
    printf("d) Aumento da temperatura das águas profundas\n");

    time(&inicio_tempo);
    char respostaE;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaE);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaE == 'b' || respostaE == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 6
    printf("Pergunta 06: A mineração de urânio, usada na produção de energia nuclear, apresenta riscos ambientais específicos. Qual desses riscos é o mais significativo?\n");
    printf("a) Emissão de CO2 durante a extração\n");
    printf("b) Liberação de elementos radioativos e metais pesados no meio ambiente\n");
    printf("c) Contaminação da cadeia alimentar por mercúrio\n");
    printf("d) Aumento do risco de desastres sísmicos\n");

    time(&inicio_tempo);
    char respostaF;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaF);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaF == 'b' || respostaF == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 7
    printf("Pergunta 07: Na gestão de resíduos de mineração de urânio, uma das maiores preocupações é a segurança a longo prazo. Qual das seguintes ações é crucial para mitigar os riscos ambientais associados aos resíduos radioativos?\n");
    printf("a) Construção de barragens de contenção de rejeitos\n");
    printf("b) Estabilização e cobertura das pilhas de rejeitos radioativos\n");
    printf("c) Incineração dos resíduos para reduzir o volume\n");
    printf("d) Diluição dos rejeitos em grandes massas de água\n");

    time(&inicio_tempo);
    char respostaG;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaG);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaG == 'b' || respostaG == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 8
    printf("Pergunta 08: Qual das seguintes técnicas de remediação ambiental é mais eficaz na recuperação de solos contaminados por metais pesados resultantes da mineração?\n");
    printf("a) Fitorremediação, que envolve o uso de plantas para absorver os contaminantes\n");
    printf("b) Uso de barreiras físicas para isolar a contaminação\n");
    printf("c) Adição de calcário para neutralizar a acidez do solo\n");
    printf("d) Injeção de produtos químicos para precipitar os metais\n");

    time(&inicio_tempo);
    char respostaH;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaH);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaH == 'a' || respostaH == 'A') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é a.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 9
    printf("Pergunta 9: A fragmentação de habitats é um impacto ambiental indireto da mineração. Qual dos seguintes efeitos resulta diretamente dessa fragmentação?\n");
    printf("a) Redução dos níveis de poluição da água\n");
    printf("b) Fragmentação de habitats, levando à perda de espécies endêmicas\n");
    printf("c) Aumento da biodiversidade local\n");
    printf("d) Expansão das áreas de vegetação secundária\n");

    time(&inicio_tempo);
    char respostaI;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaI);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaI == 'b' || respostaI == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 10
    printf("Pergunta 10: Qual das seguintes práticas pode contribuir para minimizar o impacto ambiental dos rejeitos de mineração?\n");
    printf("a) Reciclagem de rejeitos para uso na construção civil\n");
    printf("b) Construção de barragens para contenção dos rejeitos\n");
    printf("c) Incineração dos resíduos\n");
    printf("d) Descarte dos rejeitos em áreas remotas\n");

    time(&inicio_tempo);
    char respostaJ;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaJ);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaJ == 'a' || respostaJ == 'A') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é a.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 11
    printf("Pergunta 11: A mineração em regiões árticas e subárticas traz riscos ambientais únicos. Qual é o maior impacto potencial dessa atividade nessas regiões?\n");
    printf("a) Descongelamento do permafrost, liberando gases de efeito estufa\n");
    printf("b) Destruição de ecossistemas de tundra\n");
    printf("c) Aumento da poluição luminosa\n");
    printf("d) Acidificação dos solos\n");

    time(&inicio_tempo);
    char respostaK;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaK);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaK == 'a' || respostaK == 'A') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é a.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 12
    printf("Pergunta 12: A eutrofização de corpos d'água pode ser intensificada pela mineração. Qual das seguintes consequências é um resultado direto da eutrofização?\n");
    printf("a) Eutrofização de rios e lagos, levando à proliferação de algas nocivas\n");
    printf("b) Redução da biodiversidade marinha\n");
    printf("c) Aumento da concentração de metais pesados na água\n");
    printf("d) Acidificação da água\n");

    time(&inicio_tempo);
    char respostaL;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaL);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaL == 'a' || respostaL == 'A') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é a.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 13
    printf("Pergunta 13: Além dos impactos ambientais, a mineração pode gerar consequências socioeconômicas graves. Qual é uma dessas consequências?\n");
    printf("a) Diminuição dos conflitos territoriais\n");
    printf("b) Aumento da desigualdade social e econômica\n");
    printf("c) Crescimento sustentável da economia local\n");
    printf("d) Melhoria das condições de trabalho nas comunidades mineradoras\n");

    time(&inicio_tempo);
    char respostaM;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaM);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaM == 'b' || respostaM == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 14
    printf("Pergunta 14: Qual das seguintes estratégias poderia contribuir para reduzir a demanda por mineração de ferro?\n");
    printf("a) Substituição da mineração por reciclagem de aço\n");
    printf("b) Aumento da extração em regiões virgens\n");
    printf("c) Intensificação da produção de ferro fundido\n");
    printf("d) Expansão do uso de materiais alternativos ao aço\n");

    time(&inicio_tempo);
    char respostaN;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaN);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaN == 'a' || respostaN == 'A') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é a.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 15
    printf("Pergunta 15: Em regiões urbanas, uma prática de mineração inovadora está sendo utilizada para reduzir o impacto ambiental. Qual é essa prática?\n");
    printf("a) Uso de técnicas de fraturamento hidráulico\n");
    printf("b) Mineração de larga escala em zonas industriais\n");
    printf("c) Implementação de tecnologias de mineração sem escavação\n");
    printf("d) Reutilização de resíduos urbanos como matéria-prima\n");

    time(&inicio_tempo);
    char respostaO;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaO);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaO == 'd' || respostaO == 'D') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é d.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }
}
   		printf("Parabéns! Você completou o quiz de ecologia.\n");
        printf("Sua pontuação final é: %d\n", score);
        printf("Tempo total gasto: %.2f segundos\n", tempo_total);

        // Verificar e atualizar o recorde
        if (tempo_total < recorde) {
            recorde = tempo_total;
            
            printf("Novo recorde! Seu tempo foi o mais rápido até agora.\n");
        } else {
            printf("O recorde atual é: %.2f segundos\n", recorde);
        }


    printf("\nDeseja fazer novamente? Pressione 1.\n");
    printf("Se quiser sair, pressione qualquer outra tecla.\n");
    scanf("%d", &RT);
    if (RT == 1) goto inicio;

    return 0;
}
